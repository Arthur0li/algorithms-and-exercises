class Player:
    def __init__(self, height, speed, passing, dribbling, accuracy):
        """
        Base class representing a player with physical/technical attributes.
        Expected attributes: numbers (int/float).
        """
        self.height = self._to_number(height)
        self.speed = self._to_number(speed)
        self.passing = self._to_number(passing)
        self.dribbling = self._to_number(dribbling)
        self.accuracy = self._to_number(accuracy)

    @staticmethod
    def _to_number(value):
        """Converts to int when possible; otherwise keeps float; if it fails, returns 0."""
        try:
            if isinstance(value, str) and value.isdigit():
                return int(value)
            return float(value)
        except Exception:
            return 0

    def pass_ball(self):
        """Simulates a pass (uses the 'passing' attribute as reference)."""
        print("Aiming at a teammate...")
        print(f"Touching the ball with force proportional to passing ({self.passing}).")

    def shoot(self):
        """Simulates a shot (uses the 'accuracy' attribute as reference)."""
        print("Aiming at the goal...")
        print(f"Kicking the ball with shot force (accuracy: {self.accuracy}).")

    def defend(self):
        """Generic defend action — can be overridden by subclasses."""
        print("Trying to take the ball from the opponent (generic).")

    def info(self):
        """Displays summarized player attributes."""
        print("------ PLAYER INFO ------")
        print(f"Height: {self.height}")
        print(f"Speed: {self.speed}")
        print(f"Passing: {self.passing}")
        print(f"Dribbling: {self.dribbling}")
        print(f"Accuracy: {self.accuracy}")
        print("--------------------------")


class Goalkeeper(Player):
    """Goalkeeper: inherits from Player and has specific behavior."""
    def catch_ball(self):
        print("Jumping")
        print("Stretching to catch the ball with hands.")

    def defend(self, outside_box=False):
        """
        Polymorphism: goalkeeper defends differently.
        - If outside the box, can only use feet/head/shoulder
        - If inside the box, can use any part of the body
        """
        if outside_box:
            print("Outside the box: use only feet, head, or shoulder.")
        else:
            print("Inside the box: use any part of the body to defend.")


class FieldPlayer(Player):
    """Field player with typical defending behavior."""
    def defend(self):
        print("Using only feet, head, or shoulder.")
        print("Trying to intercept or dispossess the opponent.")


# --- Usage example ---
if __name__ == "__main__":
    goalkeeper = Goalkeeper(190, 60, 79, 20, 67)
    field_player = FieldPlayer(175, 90, 80, 86, 89)

    print("Goalkeeper:")
    goalkeeper.info()
    goalkeeper.defend()                 # inside the box by default
    goalkeeper.defend(outside_box=True)
    goalkeeper.catch_ball()

    print("\nField Player:")
    field_player.info()
    field_player.defend()
    field_player.pass_ball()
    field_player.shoot()

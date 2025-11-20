class RemoteControl:
    def __init__(self, color, height, width):
        self.color = color
        self.height = height
        self.width = width

        # TV state
        self.power_on = False
        self.channel = 1
        self.volume = 10

    def turn_on(self):
        if not self.power_on:
            self.power_on = True
            print("TV turned on.")
        else:
            print("The TV is already on.")

    def turn_off(self):
        if self.power_on:
            self.power_on = False
            print("TV turned off.")
        else:
            print("The TV is already off.")

    def change_channel(self, action):
        if not self.power_on:
            print("Turn the TV on first.")
            return

        if action == "+":
            self.channel += 1
        elif action == "-":
            self.channel = max(1, self.channel - 1)
        else:
            try:
                new_channel = int(action)
                if new_channel >= 1:
                    self.channel = new_channel
                else:
                    print("Invalid channel number.")
                    return
            except ValueError:
                print("Invalid command.")
                return
        
        print(f"Current channel: {self.channel}")

    def adjust_volume(self, action):
        if not self.power_on:
            print("Turn the TV on first.")
            return

        if action == "+":
            self.volume = min(100, self.volume + 1)
        elif action == "-":
            self.volume = max(0, self.volume - 1)
        else:
            try:
                level = int(action)
                if 0 <= level <= 100:
                    self.volume = level
                else:
                    print("Volume must be between 0 and 100.")
                    return
            except ValueError:
                print("Invalid command.")
                return
        
        print(f"Current volume: {self.volume}")

    def open_netflix(self):
        if not self.power_on:
            print("Turn the TV on first.")
            return
        print("Opening Netflix...")

    def display_info(self):
        state = "On" if self.power_on else "Off"
        print("----- REMOTE CONTROL INFORMATION -----")
        print(f"Color: {self.color}")
        print(f"Height: {self.height}")
        print(f"Width: {self.width}")
        print(f"TV: {state}")
        print(f"Channel: {self.channel}")
        print(f"Volume: {self.volume}")
        print("--------------------------------------")


if __name__ == "__main__":
    remote = RemoteControl("Black", 10, 5)
    remote.turn_on()
    remote.change_channel("+")
    remote.change_channel(15)
    remote.adjust_volume("+")
    remote.adjust_volume(30)
    remote.open_netflix()
    remote.display_info()
    remote.turn_off()

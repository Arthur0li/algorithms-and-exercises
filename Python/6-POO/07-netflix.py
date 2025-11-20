class Program:
    """
    Superclass to represent a generic program
    (e.g.: series, movies, documentaries).
    """
    def __init__(self, title, description, trailer):
        self.title = str(title)
        self.description = str(description)
        self.trailer = str(trailer)

    def show_description(self):
        """Displays the program's description."""
        print("Description:", self.description)


# -------------------------------------------
#  SUBCLASSES: Series and Movie
# -------------------------------------------

class Series(Program):
    """
    Child class of Program.
    Demonstrates polymorphism by overriding the show_description method.
    """
    def show_description(self):
        """
        super(): calls the method from the parent class
        and then adds Series-specific behavior.
        """
        super().show_description()   # reuses the superclass method
        print("This program has approximately 10 episodes.")


class Movie(Program):
    """
    Child class of Program.
    Does not change anything from the parent class, but inherits everything.
    """
    pass


# -------------------------------------------
#  Usage examples
# -------------------------------------------
if __name__ == "__main__":
    round6 = Series(
        "Squid Game",
        "Survival suspense series.",
        "trailer_round6.mp4"
    )

    dont_look_up = Movie(
        "Don't Look Up",
        "Suspense movie about a possible apocalypse.",
        "trailer_dontlookup.mp4"
    )

    # Inherited attributes
    print(round6.trailer)
    print(dont_look_up.trailer)

    # Polymorphism in action
    round6.show_description()
    dont_look_up.show_description()

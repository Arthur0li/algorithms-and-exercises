class Channel:
    def __init__(self, name: str, description: str, subscribers: int, nationality: str):
        """Simple constructor for a channel."""
        if subscribers < 0:
            raise ValueError("subscribers cannot be negative")
        self.name = name
        self.description = description
        self.subscribers = subscribers
        self.nationality = nationality

    def subscribe(self, amount: int = 1) -> None:
        """Adds 'amount' of subscribers (positive integer)."""
        if amount < 1:
            raise ValueError("amount must be >= 1")
        self.subscribers += int(amount)

    def unsubscribe(self, amount: int = 1) -> None:
        """Removes subscribers without allowing negative values."""
        if amount < 1:
            raise ValueError("amount must be >= 1")
        self.subscribers = max(0, self.subscribers - int(amount))

    def info(self) -> str:
        """Returns an informative string about the channel."""
        return (
            f"Channel: {self.name}\n"
            f"Description: {self.description}\n"
            f"Subscribers: {self.subscribers}\n"
            f"Nationality: {self.nationality}"
        )

    def __repr__(self) -> str:
        return f"Channel(name={self.name!r}, subscribers={self.subscribers})"


class BusinessChannel(Channel):
    def __init__(
        self,
        name: str,
        description: str,
        subscribers: int,
        nationality: str,
        team: list[str] | None = None,
    ):
        super().__init__(name, description, subscribers, nationality)
        # copy to avoid side effects
        self.team = list(team) if team is not None else []

    def add_member(self, member: str) -> None:
        if member and member not in self.team:
            self.team.append(member)

    def remove_member(self, member: str) -> None:
        if member in self.team:
            self.team.remove(member)

    def info(self) -> str:
        base = super().info()
        members = ", ".join(self.team) if self.team else "None"
        return base + f"\nTeam: {members}"

    def __repr__(self) -> str:
        return f"BusinessChannel(name={self.name!r}, subscribers={self.subscribers}, team={self.team})"


# --- Usage example ---
if __name__ == "__main__":
    channel_lancode = Channel("Lan Code", "Programming channels", 300, "Brazil")
    channel_guanabara = Channel("Guanabara", "Classes and explanations", 10_000, "Brazil")
    channel_duolingo = BusinessChannel(
        "Duolingo", "Languages and tutorials", 10_000_000, "USA", team=["Duolingo", "Liian"]
    )

    print(channel_duolingo.team)               # ['Duolingo', 'Liian']
    print(channel_lancode.info())              # readable format
    print(channel_guanabara)                   # uses __repr__

    print("Current subscribers:", channel_lancode.subscribers)
    channel_lancode.subscribe()
    print("After +1 subscriber:", channel_lancode.subscribers)
    channel_lancode.subscribe(50)
    print("After +50 subscribers:", channel_lancode.subscribers)
    channel_lancode.unsubscribe(1000)          # will not become negative
    print("After attempting to remove too many:", channel_lancode.subscribers)

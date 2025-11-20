class Computer:
    def __init__(self, brand: str, ram_memory, graphics_card: str):
        """
        Simple class that represents a computer.
        ram_memory can be a string (e.g., '8GB') or an integer (e.g., 8).
        """
        self.brand = str(brand).strip() or "Unknown"
        # tries to convert memory to integer when it makes sense (e.g.: "8" -> 8)
        try:
            if isinstance(ram_memory, str) and ram_memory.isdigit():
                ram_memory = int(ram_memory)
        except Exception:
            pass
        self.ram_memory = ram_memory
        self.graphics_card = str(graphics_card).strip() or "Integrated"
        self.powered_on = False  # computer's state

    def power_on(self) -> None:
        """Turns the computer on (if already on, informs)."""
        if self.powered_on:
            print("The computer is already on.")
        else:
            self.powered_on = True
            print("Powering on...")

    def power_off(self) -> None:
        """Turns the computer off (if already off, informs)."""
        if not self.powered_on:
            print("The computer is already off.")
        else:
            self.powered_on = False
            print("Shutting down...")

    def display(self) -> None:
        """Prints a summary of the computer information."""
        state = "On" if self.powered_on else "Off"
        print(self.info() + f"\nState: {state}")

    def info(self) -> str:
        """Returns a string with detailed computer information."""
        return (
            f"Brand: {self.brand}\n"
            f"RAM Memory: {self.ram_memory}\n"
            f"Graphics Card: {self.graphics_card}"
        )

    def __repr__(self) -> str:
        return (
            f"Computer(brand={self.brand!r}, ram_memory={self.ram_memory!r}, "
            f"graphics_card={self.graphics_card!r}, powered_on={self.powered_on})"
        )


# --- Interactive usage example ---
if __name__ == "__main__":
    main_brand = input("Enter the computer brand: ").strip() or "Unknown"
    main_ram = input("Enter the computer RAM (e.g., 8 or '8GB'): ").strip() or "Unknown"
    main_graphics = input("Enter the graphics card: ").strip() or "Integrated"

    computer1 = Computer(main_brand, main_ram, main_graphics)

    computer1.power_on()
    computer1.display()
    computer1.power_off()
    computer1.display()

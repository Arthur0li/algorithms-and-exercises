class Seller:
    def __init__(self, name, sales, goal):
        self.name = name
        self.sales = sales
        self.goal = goal
    
    def register_sales(self, amount):
        """Updates the total sales."""
        self.sales = amount

    def hit_goal(self):
        """Checks if the goal was reached using the saved value."""
        if self.sales >= self.goal:
            print(f"{self.name} reached the sales goal! :D")
        else:
            print(f"{self.name} did not reach the sales goal. :(")

    def display_info(self):
        print(f"Seller: {self.name}")
        print(f"Sales: {self.sales}")
        print(f"Goal: {self.goal}\n")


def create_seller(number):
    print(f"\n--- Registration of seller {number} ---")
    name = input("Name: ")
    sales = int(input("Number of sales: "))
    goal = int(input("Sales goal: "))
    return Seller(name, sales, goal)


# --- Main program ---
if __name__ == "__main__":
    seller1 = create_seller(1)
    seller1.display_info()
    seller1.hit_goal()

    seller2 = create_seller(2)
    seller2.display_info()
    seller2.hit_goal()

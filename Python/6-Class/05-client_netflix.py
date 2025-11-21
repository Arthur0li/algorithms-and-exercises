class Customer:
    def __init__(self, name, email, plan):
        self.name = name
        self.email = email
        self.available_plans = ("basic", "premium")

        if plan in self.available_plans:
            self.plan = plan
        else:
            raise Exception("invalid plan")

    def change_plan(self, new_plan):
        if new_plan in self.available_plans:
            self.plan = new_plan
        else:
            print("invalid plan")

    def watch_movie(self, movie, movie_plan):
        if self.plan == movie_plan:
            print("Watching movie:", movie)

        elif self.plan == "premium":
            print("Watching movie:", movie)

        elif self.plan == "basic" and movie_plan == "premium":
            print("Please upgrade your plan")

        else:
            print("invalid plan")

            
if __name__ == "__main__":
    customer = Customer('Arthur', 'Aethur@gmail.com', 'basic')

    print(customer.plan)
    customer.watch_movie("Harry Potter", "premium")

    customer.change_plan("premium")
    print(customer.plan)
    customer.watch_movie("Harry Potter", "premium")

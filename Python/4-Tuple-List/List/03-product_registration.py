while True:
    final_list = []

    print("\nWelcome to the product registration program.")

    while True:
        try:
            quantity = int(input("Enter the number of products you want to add: "))
            if quantity < 0:
                print("Enter a non-negative number.")
                continue
            break
        except ValueError:
            print("You did not enter a number, try again...")

    for i in range(quantity):
        product = input(f"\nEnter product {i+1}: ").strip()
        while True:
            try:
                price = float(input("Enter the price: ").replace(',', '.'))
                break
            except ValueError:
                print("You did not enter a number, try again...")
        final_list.append((product, price))

    print("\nHere is the product list:")
    for idx, item in enumerate(final_list, start=1):
        print(idx, item)
    print("Number of products in the list:", len(final_list))

    while True:
        modify_choice = input("\nDo you want to make any modifications to the list? (y/n): ").strip().lower()
        if modify_choice == 'y':
            done_modifications = False
            while True:
                type_modify_choice = input("What modification do you want to make? (e=delete / a=add / t=change / s=no more changes): ").strip().lower()
                if type_modify_choice == 'e':
                    if not final_list:
                        print("Empty list. Nothing to delete.")
                        continue

                    print("Review the list and choose the products to delete by their number:")
                    for idx, item in enumerate(final_list, start=1):
                        print(idx, item)

                    while True:
                        try:
                            quantity_delete = int(input("Enter how many products you want to delete: "))
                            if 0 <= quantity_delete <= len(final_list):
                                break
                            else:
                                print("Invalid number, try again.")
                        except ValueError:
                            print("You did not enter a number, try again...")

                    if quantity_delete == 0:
                        print("No deletion requested.")
                        continue

                    indices_to_delete = []
                    for i_del in range(quantity_delete):
                        while True:
                            try:
                                product_delete = int(input(f"Enter the number of the {i_del+1}º product to delete: "))
                                if 1 <= product_delete <= len(final_list) and product_delete not in indices_to_delete:
                                    indices_to_delete.append(product_delete)
                                    break
                                else:
                                    print("Invalid number or already chosen, try again.")
                            except ValueError:
                                print("You did not enter a number, try again")

                    for idx in sorted(indices_to_delete, reverse=True):
                        del final_list[idx-1]

                    print("Products deleted successfully. Updated list:")
                    for idx, item in enumerate(final_list, start=1):
                        print(idx, item)

                elif type_modify_choice == 'a':
                    while True:
                        try:
                            quantity_add = int(input("Enter how many products you want to add: "))
                            if quantity_add >= 0:
                                break
                            else:
                                print("Enter a non-negative number.")
                        except ValueError:
                            print("You did not enter a number, try again...")

                    for i_add in range(quantity_add):
                        product = input(f"\nEnter the name of product {len(final_list)+1}: ").strip()
                        while True:
                            try:
                                price = float(input("Enter the price: ").replace(',', '.'))
                                break
                            except ValueError:
                                print("You did not enter a number, try again...")
                        final_list.append((product, price))

                    print("Products added. Updated list:")
                    for idx, item in enumerate(final_list, start=1):
                        print(idx, item)

                elif type_modify_choice == 't':
                    if not final_list:
                        print("Empty list. Nothing to change.")
                        continue

                    print("Review the list and choose the products to change by their number:")
                    for idx, item in enumerate(final_list, start=1):
                        print(idx, item)

                    while True:
                        try:
                            quantity_change = int(input("Enter how many products you want to change: "))
                            if 0 <= quantity_change <= len(final_list):
                                break
                            else:
                                print("Invalid number, try again.")
                        except ValueError:
                            print("You did not enter a number, try again...")

                    for i_ch in range(quantity_change):
                        while True:
                            try:
                                prod_num = int(input(f"Enter the number of the {i_ch+1}º product to change: "))
                                if 1 <= prod_num <= len(final_list):
                                    break
                                else:
                                    print("Invalid number, try again.")
                            except ValueError:
                                print("You did not enter a number, try again.")

                        current_name, current_price = final_list[prod_num-1]
                        print(f"Current product: {current_name}, price: {current_price}")

                        new_name = input("Enter the new name (press Enter to keep the current): ").strip()
                        if new_name == "":
                            new_name = current_name

                        while True:
                            new_price_input = input("Enter the new price (press Enter to keep the current): ").strip()
                            if new_price_input == "":
                                new_price = current_price
                                break
                            try:
                                new_price = float(new_price_input.replace(',', '.'))
                                break
                            except ValueError:
                                print("You did not enter a valid number, try again.")

                        final_list[prod_num-1] = (new_name, new_price)
                        print("Product changed successfully.")

                    print("Updated list:")
                    for idx, item in enumerate(final_list, start=1):
                        print(idx, item)

                elif type_modify_choice == 's':
                    done_modifications = True
                    print("Finishing modifications.")
                    break

                else:
                    print("Invalid option, try again.")

            if done_modifications:
                break

        elif modify_choice == 'n':
            print("You chose not to make any changes to the list :)")
            break
        else:
            print("You typed incorrectly, try again....")

    while True:
        restart_choice = input("\nThe program has ended, do you want to restart? (y/n): ").strip().lower()
        if restart_choice == 'y':
            print("You chose to restart the program :)")
            break
        elif restart_choice == 'n':
            print("You chose to close the program :)")
            exit()
        else:
            print("You typed incorrectly, try again....")
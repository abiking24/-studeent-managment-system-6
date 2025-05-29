void showAll() {
        if(head == NULL) {
            cout << "\nList is Empty!\n";
            return;
        }

        sortByID(); // Automatically sort before showing

        Node* temp = head;
        cout << "\nAll Student Records (Sorted by ID):\n";
        cout << "----------------------------------------\n";
        while(temp != NULL) {
            cout << "ID: " << temp->roll_no << endl
                 << "Name: " << temp->name << endl
                 << "Course: " << temp->course << endl
                 << "Qualification: " << temp->quali << endl
                 << "Phone: " << temp->phone_no << endl
                 << "Address: " << temp->address << endl
                 << "----------------------------------------\n";
            temp = temp->next;
        }
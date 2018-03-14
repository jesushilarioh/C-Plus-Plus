// Receive into selectBook variable
        // Error check for input validation
        while (!(cin >> selectBook) || (selectBook < 1 || selectBook > 10))   // Error Check for valid input
        {
            // Describe error
            cout << "ERROR: you must choose a number from 1 to 10.";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }

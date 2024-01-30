ifstream out("names.txt");
ifstream in("passwords.txt");


if (!out.is_open() || !in.is_open()) {
    cout << "Error opening files!\n";
    return 1; // Indicate error
}


string username, password;
while (getline(out, username) && getline(in, password)) {
    // Compare username and password here
    if (username == ID && password == pass) {
        cout << "Credentials match!\n";
    } else {
        cout << "Credentials don't match.\n";
    }
}

usernamesFile.close();
passwordsFile.close();

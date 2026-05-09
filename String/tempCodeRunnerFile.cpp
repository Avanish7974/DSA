string str4 = "Take u forward is Awesome";
    int vowels = 0, consonants = 0,space = 0;
    for(int i = 0;i<str4.length();i++){
        if(str4[i] =='a' || str4[i] == 'e' || str4[i] == 'i' || str4[i] == 'o' || str4[i] == 'u' ||
           str4[i] == 'A' || str4[i] == 'E' || str4[i] == 'I' || str4[i] == 'O' || str4[i] == 'U')
        {
            vowels++;
        }
        else if(str4[i] == ' ')
        {
            space++;
        }
        else
        {
            consonants++;
        }
        
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Spaces: " << space << endl;

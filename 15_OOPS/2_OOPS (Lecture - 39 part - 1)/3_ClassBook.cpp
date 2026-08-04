// #include<bits/stdc++.h> 
// using namespace std;

// class Book{
//     char name;
//     int price;
//     int noOfPages;

//     int countBooks(int p){
//         int(price<p)
//             return 1;
//         else
//             return 0;
//     }

//     bool isBookPresent(char book){
//         if(name == book)
//             return true;
//         else
//             return false;

//     }
// };

// int main(){
//     Book harryPotter;
//     harryPotter.name = 'H';
//     harryPotter.price = 1000;
//     harryPotter.noOfPages = 500;

//     cout<<harryPotter.(100);
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Book {
// public:   // make members accessible
//     string name;
//     int price;
//     int noOfPages;

//     int countBooks(int p) {
//         if (price < p)
//             return 1;
//         else
//             return 0;
//     }

//     bool isBookPresent(string book) {
//         if (name == book)
//             return true;
//         else
//             return false;
//     }
// };

// int main() {
//     Book harryPotter;
//     harryPotter.name = "Harry Potter";
//     harryPotter.price = 1000;
//     harryPotter.noOfPages = 500;

//     cout << harryPotter.countBooks(500); 
//     cout << harryPotter.isBookPresent('H'); 
// }


#include <bits/stdc++.h>
using namespace std;

class Book {
public:
    string name;
    int price;
    int noOfPages;

    int countBooks(int p) {
        if (price < p)
            return 1;
        else
            return 0;
    }

    bool isBookPresent(string book) {
        // check if 'book' exists as substring in name
        return name.find(book) != string::npos;
    }
};

int main() {
    Book harryPotter;
    harryPotter.name = "Harry Potter";
    harryPotter.price = 1000;
    harryPotter.noOfPages = 500;

    cout << harryPotter.isBookPresent("H");           // ✅ prints 1
    cout << harryPotter.isBookPresent("Harry");       // ✅ prints 1
    cout << harryPotter.isBookPresent("Potter");      // ✅ prints 1
    cout << harryPotter.isBookPresent("Lord");        // ❌ prints 0
}

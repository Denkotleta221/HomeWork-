#include <iostream>
#include <string>
using namespace std;

class Microphone {
private:
    string brand;
    string type;
    string color;
    bool is_Wireless;
    float price;

public:
    void setValues(string b, string t, string c, bool w, float p) {
        brand = b;
        type = t;
        color = c;
        is_Wireless = w;
        price = p;
    }

    void turnOn() { cout << brand << " microphone is turned on.\n"; }
    void turnOff() { cout << brand << " microphone is turned off.\n"; }
    void testSound() { cout << brand << " microphone sound check.\n"; }
    void connectToPC() { cout << brand << " is connected to PC.\n"; }
    void printInfo() {
        cout << "Microphone Brand: " << brand << ", Type: " << type
            << ", Color: " << color << ", Wireless: "
            << (is_Wireless ? "Yes" : "No") << ", Price: $" << price << "\n";
    }
};

//  Піонії у вазі
class Peonies {
private:
    int count;
    string color;
    string vase_Material;
    float height;
    bool has_Water;

public:
    void setValues(int c, string col, string mat, float h, bool w) {
        count = c;
        color = col;
        vase_Material = mat;
        height = h;
        has_Water = w;
    }

    void addWater() { has_Water = true; cout << "Water added to the vase.\n"; }
    void removeWater() { has_Water = false; cout << "Water removed from the vase.\n"; }
    void changeColor(string newColor) { color = newColor; }
    void increaseHeight(float h) { height += h; }
    void printInfo() {
        cout << "Peonies Count: " << count << ", Color: " << color
            << ", Vase Material: " << vase_Material << ", Height: " << height
            << " cm, Water: " << (has_Water ? "Yes" : "No") << "\n";
    }
};

class AcousticGuitar {
private:
    string brand;
    string body_Material;
    string string_Type;
    int string_Count;
    float weight;

public:
    void setValues(string b, string m, string s, int sc, float w) {
        brand = b;
        body_Material = m;
        string_Type = s;
        string_Count = sc;
        weight = w;
    }

    void tune() { cout << brand << " guitar is tuned.\n"; }
    void play() { cout << brand << " guitar is playing a melody.\n"; }
    void replaceStrings() { cout << "Strings replaced.\n"; }
    void changeMaterial(string newMat) { body_Material = newMat; }
    void printInfo() {
        cout << "Guitar Brand: " << brand << ", Body Material: " << body_Material
            << ", String Type: " << string_Type << ", Number of Strings: "
            << string_Count << ", Weight: " << weight << " kg\n";
    }
};

class Wardrobe {
private:
    string material;
    string color;
    int shelves;
    bool has_Mirror;
    float height;

public:
    void setValues(string m, string c, int s, bool mirror, float h) {
        material = m; color = c; shelves = s; has_Mirror = mirror; height = h;
    }

    void open() { cout << "The wardrobe is opened.\n"; }
    void close() { cout << "The wardrobe is closed.\n"; }
    void addShelf() { shelves++; cout << "One shelf added.\n"; }
    void paint(string newColor) { color = newColor; cout << "Wardrobe painted " << color << ".\n"; }
    void printInfo() {
        cout << "Wardrobe Material: " << material << ", Color: " << color
            << ", Shelves: " << shelves << ", Has Mirror: "
            << (has_Mirror ? "Yes" : "No") << ", Height: " << height << " cm\n";
    }
};


class Book {
private:
    string title;
    string author;
    int pages;
    string language;
    bool is_Open;

public:
    void setValues(string t, string a, int p, string l, bool o) {
        title = t;
        author = a;
        pages = p;
        language = l;
        is_Open = o;
    }

    void open() { is_Open = true; cout << "The book is opened.\n"; }
    void close() { is_Open = false; cout << "The book is closed.\n"; }
    void readPage() { cout << "Reading a page...\n"; }
    void translate(string lang) { language = lang; }
    void printInfo() {
        cout << "Book Title: " << title << ", Author: " << author
            << ", Pages: " << pages << ", Language: " << language
            << ", Open: " << (is_Open ? "Yes" : "No") << "\n";
    }
};

int main() {
    Microphone microphone;
    microphone.setValues("Shure", "Condenser", "Black", true, 199.96);
    microphone.turnOn();
    microphone.testSound();
    microphone.connectToPC();
    microphone.turnOff();
    microphone.printInfo();

    Peonies flowers;
    flowers.setValues(5, "Pink", "Glass", 30, true);
    flowers.removeWater();
    flowers.addWater();
    flowers.changeColor("White");
    flowers.increaseHeight(2.0);
    flowers.printInfo();

    AcousticGuitar guitar;
    guitar.setValues("Yamaha", "Mahogany", "Nylon", 6, 2.5);
    guitar.tune();
    guitar.play();
    guitar.replaceStrings();
    guitar.changeMaterial("Maple");
    guitar.printInfo();

    Wardrobe wardrobe;
    wardrobe.setValues("Wood", "Brown", 4, true, 180);
    wardrobe.open();
    wardrobe.addShelf();
    wardrobe.paint("White");
    wardrobe.close();
    wardrobe.printInfo();

    Book book;
    book.setValues("The Design and Evolution of C++", "Bjarne Stroustrup", 120, "Ukrainian", false);
    book.open();
    book.readPage();
    book.translate("English");
    book.close();
    book.printInfo();
}

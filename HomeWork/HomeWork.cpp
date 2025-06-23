#include <iostream>
#include <string>
using namespace std;

class Microphone {
private:
    string* brand;
    string type;
    string color;
    bool isWireless;
    float price;

public:
    Microphone() : Microphone("Unknown", "Dynamic", "Black", false, 0.0) {}

    Microphone(string b, string t, string c, bool w, float p) {
        brand = new string(b);
        type = t;
        color = c;
        isWireless = w;
        price = p;
    }

    Microphone(const Microphone& other) {
        brand = new string(*other.brand);
        type = other.type;
        color = other.color;
        isWireless = other.isWireless;
        price = other.price;
    }

    ~Microphone() {
        delete brand;
    }

    // SET
    void setBrand(string b) {
        *brand = b;
    }

    void setType(string t) { type = t; }
    void setColor(string c) { color = c; }
    void setIsWireless(bool w) { isWireless = w; }
    void setPrice(float p) { price = p; }

    // GET
    string getBrand() const { return *brand; }
    string getType() const { return type; }
    string getColor() const { return color; }
    bool getIsWireless() const { return isWireless; }
    float getPrice() const { return price; }

    void printInfo() {
        cout << "[Microphone] Brand: " << *brand << ", Type: " << type
            << ", Color: " << color << ", Wireless: "
            << (isWireless ? "Yes" : "No") << ", Price: $" << price << "\n";
    }
};

class Peonies {
private:
    int count;
    string color;
    string vaseMaterial;
    float height;
    bool hasWater;

public:
    // SET
    void setCount(int c) {count = c; }
    void setColor(string col) {color = col; }
    void setVaseMaterial(string vm) {vaseMaterial = vm; }
    void setHeight(float h) {height = h; }
    void setHasWater(bool w) {hasWater = w; }

    // GET
    int getCount() const { return count; }
    string getColor() const { return color; }
    string getVaseMaterial() const { return vaseMaterial; }
    float getHeight() const { return height; }
    bool getHasWater() const { return hasWater; }

    void printInfo(){
        cout << "[Peonies] Count: " << count << ", Color: " << color
            << ", Vase Material: " << vaseMaterial << ", Height: "
            << height << " cm, Water: " << (hasWater ? "Yes" : "No") << "\n";
    }
};

class AcousticGuitar {
private:
    string brand;
    string bodyMaterial;
    string stringType;
    int stringCount;
    float weight;

public:
    // SET
    void setBrand(string b) {brand = b; }
    void setBodyMaterial(string bm) {bodyMaterial = bm; }
    void setStringType(string st) {stringType = st; }
    void setStringCount(int sc) {stringCount = sc; }
    void setWeight(float w) {weight = w; }

    // GET
    string getBrand() const { return brand; }
    string getBodyMaterial() const { return bodyMaterial; }
    string getStringType() const { return stringType; }
    int getStringCount() const { return stringCount; }
    float getWeight() const { return weight; }

    void printInfo() {
        cout << "[Guitar] Brand: " << brand << ", Body: " << bodyMaterial
            << ", Strings: " << stringCount << " (" << stringType << ")"
            << ", Weight: " << weight << " kg\n";
    }
};

class Wardrobe {
private:
    string material;
    string color;
    int shelves;
    bool hasMirror;
    float height;

public:
    // SET
    void setMaterial(string m) { if (!m.empty()) material = m; }
    void setColor(string c) {color = c; }
    void setShelves(int s) {shelves = s; }
    void setHasMirror(bool m) {hasMirror = m; }
    void setHeight(float h) {height = h; }

    // GET
    string getMaterial() const { return material; }
    string getColor() const { return color; }
    int getShelves() const { return shelves; }
    bool getHasMirror() const { return hasMirror; }
    float getHeight() const { return height; }

    void printInfo() {
        cout << "[Wardrobe] Material: " << material << ", Color: " << color
            << ", Shelves: " << shelves << ", Mirror: "
            << (hasMirror ? "Yes" : "No") << ", Height: " << height << " cm\n";
    }
};


class Book {
private:
    string* title;
    string author;
    int pages;
    string language;
    bool isOpen;

public:
    Book() : Book("Untitled", "Unknown", 0, "English", false) {}

    Book(string t, string a, int p, string l, bool o) {
        title = new string(t);
        setAuthor(a);
        setPages(p);
        setLanguage(l);
        setIsOpen(o);
    }

    Book(const Book& other) {
        title = new string(*other.title);
        author = other.author;
        pages = other.pages;
        language = other.language;
        isOpen = other.isOpen;
    }

    ~Book() {
        delete title;
    }

    // SET
    void setTitle(string t) { *title = t; }
    void setAuthor(string a) { author = a; }
    void setPages(int p) { pages = p; }
    void setLanguage(string l) { language = l; }
    void setIsOpen(bool o) { isOpen = o; }

    // GET
    string getTitle() const { return *title; }
    string getAuthor() const { return author; }
    int getPages() const { return pages; }
    string getLanguage() const { return language; }
    bool getIsOpen() const { return isOpen; }

    void printInfo() {
        cout << "[Book] Title: " << *title << ", Author: " << author
            << ", Pages: " << pages << ", Language: " << language
            << ", Open: " << (isOpen ? "Yes" : "No") << "\n";
    }
};

int main() {
    Microphone mic;
    mic.setBrand("Shure");
    mic.setType("Dynamic");
    mic.setColor("Black");
    mic.setIsWireless(true);
    mic.setPrice(199.99);
    mic.printInfo();

    // Peonies
    Peonies flowers;
    flowers.setCount(7);
    flowers.setColor("Pink");
    flowers.setVaseMaterial("Glass");
    flowers.setHeight(25.5);
    flowers.setHasWater(true);
    flowers.printInfo();

    AcousticGuitar guitar;
    guitar.setBrand("Yamaha");
    guitar.setBodyMaterial("Mahogany");
    guitar.setStringType("Nylon");
    guitar.setStringCount(6);
    guitar.setWeight(2.3);
    guitar.printInfo();

    Wardrobe wd;
    wd.setMaterial("Wood");
    wd.setColor("White");
    wd.setShelves(4);
    wd.setHasMirror(true);
    wd.setHeight(180);
    wd.printInfo();

    Book book;
    book.setTitle("1984");
    book.setAuthor("George Orwell");
    book.setPages(328);
    book.setLanguage("English");
    book.setIsOpen(true);
    book.printInfo();
}

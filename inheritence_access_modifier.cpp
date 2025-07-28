#include <iostream>

/*
Key Differences

public: Anyone can access it.
protected: Only the class and its children can access it.
private: Only the class itself can access it (children cannot).

*/
// The parent class with members of all access levels
class Base {
public:
    int publicMember = 1;
protected:
    int protectedMember = 2;
private:
    int privateMember = 3;
};

// ===================================
// 1. PUBLIC INHERITANCE (is-a relationship)
// ===================================
class PublicDerived : public Base {
public:
    void accessBaseMembers() {
        // Public members from Base stay public.
        publicMember = 10;    // OK

        // Protected members from Base stay protected.
        protectedMember = 20; // OK

        // Private members from Base are always inaccessible.
        // privateMember = 30;   // ERROR
    }
};

// ===================================
// 2. PROTECTED INHERITANCE
// ===================================
class ProtectedDerived : protected Base {
public:
    void accessBaseMembers() {
        // Public members from Base become protected.
        publicMember = 11;    // OK

        // Protected members from Base stay protected.
        protectedMember = 21; // OK

        // Private members from Base are always inaccessible.
        // privateMember = 31;   // ERROR
    }
};

// ===================================
// 3. PRIVATE INHERITANCE
// ===================================
class PrivateDerived : private Base {
public:
    void accessBaseMembers() {
        // Public members from Base become private.
        publicMember = 12;    // OK

        // Protected members from Base become private.
        protectedMember = 22; // OK

        // Private members from Base are always inaccessible.
        // privateMember = 33;   // ERROR
    }
};


int main() {
    // --- PublicDerived Object ---
    PublicDerived pub_obj;
    // You can access publicMember because it remained public.
    pub_obj.publicMember = 100; // OK
    // pub_obj.protectedMember = 101; // ERROR: protectedMember is still protected

    // --- ProtectedDerived Object ---
    ProtectedDerived prot_obj;
    // You CANNOT access publicMember because it became protected in ProtectedDerived.
    // prot_obj.publicMember = 200; // ERROR

    // --- PrivateDerived Object ---
    PrivateDerived priv_obj;
    // You CANNOT access publicMember because it became private in PrivateDerived.
    // priv_obj.publicMember = 300; // ERROR

    return 0;
}
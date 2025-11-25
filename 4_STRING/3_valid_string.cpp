// #include<iostream>
// using namespace std;
// int validate(char *name)
// {
// int i;
// for(i=0;i !='\0';i++)
// {
//     if(!(name[i]>=65 && name[i] <=90) &&  !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57)
//    return 0;
// }
// return 1;;

// }
// int main()
// {
// char * name="deepak123";
// if(validate(name))
// {
//     cout<<"valid string";
// }
// else
// {
//     cout<<"invalid string";
// }
//     return 0;
// }

#include<iostream>
using namespace std;

int validate(char *name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (!((name[i] >= 'A' && name[i] <= 'Z') || 
              (name[i] >= 'a' && name[i] <= 'z') || 
              (name[i] >= '0' && name[i] <= '9'))) {
            return 0;  // invalid character found
        }
    }
    return 1;  // all characters valid
}

int main() {
    char name[] = "deepak123";  // use array, not pointer literal
    if (validate(name)) {
        cout << "valid string";
    } else {
        cout << "invalid string";
    }
    return 0;
}
  // here we can pass the there ascii value also 
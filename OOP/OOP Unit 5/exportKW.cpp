// // #include<iostream>
// // template<typename T>
// // class demo{

// // };
// // int main(){
// //     Struct std{}
// //     std::cout << " Hello World ";
// //     ::cout << " Hello World ";
// // }





// // Dependant Name & Qualified name in a template is definition/declaration of Typename 

// // There are two concepts in Type name 
// //      Qualified name Specifies is one that specify the scope 


// // If there is nothing on right side then it's global scope 

// // Qualified name appears on the right side 


// // Nested name specifier 



// class A {
//     public : 
//     Class iterator {

//     }
// }

// template <class T>
// void demo(T t ){
//     T::Iterator i;
    
// }

// template <class T>
// void demo(T t ){
// Typename::Iterator i;
    
// }





// Export kw is used to mark template definition that is to be exported

export module demo;
import<iostream>
export void demo(){
    cout << " Hello Demo ";
}
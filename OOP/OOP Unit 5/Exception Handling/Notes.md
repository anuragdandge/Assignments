# Try & Catch
Exception Handling in c ++ consists three keywords: try, catch and throw. The try block is used to enclose a block of code that might throw an exception. The catch block is used to handle the exception. The throw keyword is used to throw an exception.
- The try block is used to enclose a block of code that might throw an exception.
- The catch block is used to handle the exception.
- The throw keyword is used to throw an exception.

## Try Block
The try block is used to enclose a block of code that might throw an exception. The try block must be followed by either catch or finally block.

## Catch Block
The catch block is used to handle the exception. It must be preceded by try block which means you can't use catch block alone. It can be followed by another catch block that means one try block can be associated with multiple catch blocks.

## Throw Keyword
The throw keyword is used to throw an exception. You can throw an exception by using throw keyword. There are two ways to throw an exception:

```
try {
    // try block
}
catch (ExceptionType1 e1) {
    // catch block
}
catch (ExceptionType2 e2) {
    // catch block
}
catch (ExceptionType3 e3) {
    // catch block
}
catch (...) {
    // catch block
}
```

```std::exception``` is the base class for all the exceptions in c++. It has a virtual function what() which returns a null-terminated character sequence describing the general cause of the current error.


- ```std::bad_alloc``` is a standard exception that is thrown in case of failure in memory allocation. It is a derived class of std::exception class.
- ```std::bad_cast``` is a standard exception that is thrown in case of failure in dynamic_cast. It is a derived class of std::exception class.
- ```std::bad_exception``` is a standard exception that is thrown in case of failure in unexpected handler. It is a derived class of std::exception class.
- ```std::bad_typeid``` is a standard exception that is thrown in case of failure in typeid. It is a derived class of std::exception class.
- ```std::bad_function_call``` is a standard exception that is thrown in case of failure in calling a function object. It is a derived class of std::exception class.
- ```std::bad_weak_ptr``` is a standard exception that is thrown in case of failure in accessing a weak pointer. It is a derived class of std::exception class.
- ```std::bad_array_new_length``` is a standard exception that is thrown in case of failure in allocating an array. It is a derived class of std::exception class.
- ```std::logic_error``` is a standard exception that is thrown in case of logical errors. It is a derived class of std::exception class.
- ```std::domain_error``` is a standard exception that is thrown in case of domain errors. It is a derived class of std::logic_error class.
- ```std::invalid_argument``` is a standard exception that is thrown in case of invalid arguments. It is a derived class of std::logic_error class.
- ```std::length_error``` is a standard exception that is thrown in case of length errors. It is a derived class of std::logic_error class.
- ```std::out_of_range``` is a standard exception that is thrown in case of out of range errors. It is a derived class of std::logic_error class.
- ```std::runtime_error``` is a standard exception that is thrown in case of runtime errors. It is a derived class of std::exception class.
- ```std::range_error``` is a standard exception that is thrown in case of range errors. It is a derived class of std::runtime_error class.
- ```std::overflow_error``` is a standard exception that is thrown in case of overflow errors. It is a derived class of std::runtime_error class.
- ```std::underflow_error``` is a standard exception that is thrown in case of underflow errors. It is a derived class of std::runtime_error class.




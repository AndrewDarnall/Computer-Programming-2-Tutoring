## Extern Example

Usiamo extern per utilizzare nel nostro codice, source.cpp in questo caso, del codice scritto da qualcun'altro
ovvero file_header.cpp in questo caso

E' un concetto simile a quello di usare header files (.h in C e .hpp in C++) tuttavia come noterete, non e' presente alcun include in 'source.cpp'

Il compilatore sapra' compliare e linkare in maniera appropriata le variabili/funzioni usate grazie alla keyword 'extern' con il quale si 'ridefiniscono' le variabili nel nostro codice

- Per compilare l'esempio, non essendoci l'include, bisogna usare: g++ source.cpp file_header.cpp
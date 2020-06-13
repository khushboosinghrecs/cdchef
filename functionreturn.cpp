#include <iostream>
int *arrayreturn(int n)
{
    //jo sahi lage use karna idea samjhte rahna stack clear ho jata isliye array vclear ho jata isiliye array retunr karne me RE aata hai...RE? Run time Error ohhk
    // uhmm go  next
    // kah rhi n...mt kro gdhe
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = i * 10;
    return arr;
}
int main()
{
    int *brr = arrayreturn(10);
    for (int i = 0; i < 10; i++)
        std::cout << brr[i] << ' ';
    std::cout << '\n';
    return 0;
}
// now listen we can return array from function by three methods...
// first dynamic memory, then static, then ek or....h koi or ye best q h?
// btaoge?
// you can not declare dynamic size static array ...
// well i want to discuss logic behind ?
// due to stack clear at function return all data clears from stack this is why stack array is not used
// but ye to through out pgm tk rhega n? static pure program tak aur heap memory explicit clear tak...hmm smjh rhi m
// i think jadaloss nhi h qki heap wale ko del krna pdega isiliye mdekahine static wa
// or kuch?

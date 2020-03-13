#include <bits/stdc++.h>

using namespace std;
/*
 * problema: Encontrar o número duplicado
 *
 * Dado um vetor vet contendo N números onde cada inteiro está entre 1 e N (inclusive),
 * prove que existe pelo menos um número duplicado. Assuma que existe apenas um número
 * duplicado, encontre o mesmo.
 *
 * Exemplo 1:
 *
 * Input: [1,3,4,2,2]
 * Output: 2
 *
 * Exemplo 2:
 *
 * Input: [3,1,3,4,2]
 * Output: 3
 *
 * Nota:
 *
 * Você não deve modificar o vetor.
 * Você deve usar apenas espaço extra constante O(1).
 * A complexidade do algoritmo deve ser menor do que O(n^2).
 * Existe apenas um número duplicado no vetor, no entanto o mesmo
 * pode aparecer mais de uma vez.
 */
int main()
{
    // Solução: Floyd's Tortoise and Hare (cycle detection)
    int N;
    cin>>N;

    int vet[N];
    for(int i = 0 ;i < N;i++)
    {
        cin>>vet[i];
    }

    int tartaruga,lebre;

    tartaruga = vet[0];lebre = vet[0];

    while(true)
    {
        tartaruga = vet[tartaruga];
        lebre = vet[vet[lebre]];
        if(tartaruga == lebre)
            break;
    }

    int ptr1 = vet[0];
    int ptr2 = tartaruga;
    while(ptr1!=ptr2)
    {
        ptr1 = vet[ptr1];
        ptr2 = vet[ptr2];
    }
    cout<<ptr1<<endl;

}

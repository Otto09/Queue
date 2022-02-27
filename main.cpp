#include <iostream>

using namespace std;

void enque(int a[], int &queue_pointer, int value);
void afisez(int a[], int &queue_pointer);
int dequeue(int a[], int &queue_pointer);

int main()
{
    int q[100] = {12, 31, 7, 19};
    int qp = 3;

    enque(q, qp, 56);//Add the value 56 in the queue

    afisez(q, qp);

    int p = dequeue(q, qp);//pull the queue out first

    afisez(q, qp);

    dequeue(q, qp);//extract another item (first), but don't keep it

    afisez(q, qp);

    return 0;
}

void enque(int a[], int &queue_pointer, int value)
{
    queue_pointer++;
    a[queue_pointer] = value;
}

void afisez(int a[], int &queue_pointer)
{
    cout << "QP: " << queue_pointer << ", coada: ";

    for (int i = 0; i <= queue_pointer; i++)
        cout << a[i] << " ";
    cout << endl;
}

int dequeue(int a[], int &queue_pointer)
{
    int aux;

    queue_pointer--;
    aux = a[0];

    for (int i = 0; i <= queue_pointer; i++)
        a[i] = a[i + 1];
    return aux;
}

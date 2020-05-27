#include <iostream>

using namespace std;

void enque(int a[], int &queue_pointer, int value);
void afisez(int a[], int &queue_pointer);
int dequeue(int a[], int &queue_pointer);

int main()
{
    int q[100] = {12, 31, 7, 19};
    int qp = 3;

    enque(q, qp, 56);//Adaug in coada valoarea 56

    afisez(q, qp);

    int p = dequeue(q, qp);//Extrag din coada, primul

    afisez(q, qp);

    dequeue(q, qp);//Mai extrag un element (primul), dar nu-l pastrez

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

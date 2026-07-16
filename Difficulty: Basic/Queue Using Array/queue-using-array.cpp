class myQueue {
    int *arr;
    int size;
    int front;
    int rear;
    int cnt;

public:

    myQueue(int n) {
        size = n;
        arr = new int[n];
        front = 0;
        rear = -1;
        cnt = 0;
    }

    bool isEmpty() {
        return cnt == 0;
    }

    bool isFull() {
        return cnt == size;
    }

    void enqueue(int x) {

        if (isFull())
            return;

        rear = (rear + 1) % size;
        arr[rear] = x;
        cnt++;
    }

    void dequeue() {

        if (isEmpty())
            return;

        front = (front + 1) % size;
        cnt--;
    }

    int getFront() {

        if (isEmpty())
            return -1;

        return arr[front];
    }

    int getRear() {

        if (isEmpty())
            return -1;

        return arr[rear];
    }
};
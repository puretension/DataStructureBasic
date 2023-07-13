//typedef struct Element {
//int id;
//int priority;
//}Element;
//Element PQ[MAX];
//
//#define SWAP(a,b) {Element tmp = a; a = b; b = tmp;}
//void insert(int id, int priority) {
//int i = ++heap_size;
//PQ[i].id = id;
//PQ[i].priority = priority;
//for (int j = 1; j < i; ++j) {
//for (int k = 1; k < i; ++k) {
//if (PQ[k].priority > PQ[k + 1].priority) {
//SWAP(PQ[k], PQ[k + 1]);
//}
//if ((PQ[k].priority == PQ[k + 1].priority) && (PQ[k].id > PQ[k + 1].id)) {
//SWAP(PQ[k], PQ[k + 1]);
//}
//}
//}
//
//}
//void deletemin() {
//Element temp = PQ[1];
//for (int i = 1; i < heap_size; ++i) {
//SWAP(PQ[i], PQ[i + 1]);
//}
//heap_size--;
//printf("Delete : (%d , %d)\n", temp.id, temp.priority);
//}
//

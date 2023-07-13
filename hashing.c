//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define TABLE_SIZE 1001
//#define TEST_NUM 900 // key 입력 개수
//
////typedef struct {
////    int key;
////    int value;
////} element;
//
//typedef struct{
//    int key, value;
//}element;
//
//element ht[TABLE_SIZE];
//element success_test[TEST_NUM]; // test를 위해 생성한 key를 저장
//
//int search_count = 0;
//int max_search_count = 0;
//int total_search_count = 0;
//
//void linear_probing_insert(element item);
//void linear_probing_search(element item);
//int get_random_key() {
//    return rand() % 10000;
//}
//int hashing(int key);
//
//int hashing(int key) {
//    return key % TABLE_SIZE;
//}
//
//void linear_probing_insert(element item) {
//    int index = hashing(item.key);
//
//    while (ht[index].key != -1) {
//        index = (index + 1) % TABLE_SIZE;
//    }
//    ht[index] = item;
//}
//
//void linear_probing_search(element item) {
//    int index = hashing(item.key);
//
//    while (ht[index].key != -1) {
//        total_search_count++;
//        search_count++;
//        if (ht[index].value == item.value) return;
//
//        index = (index + 1) % TABLE_SIZE;
//
//        if (index == hashing(item.key)) break;
//    }
//}
//
//void main() {
//    srand((unsigned int)time(NULL));
//
//    // 모든 key값 -1로 초기화http://dvalueup.com/upload_design/20220908092141-f84cc0c649.png
//    for (int i = 0; i < TABLE_SIZE; i++)
//        ht[i].key = -1;
//
//    // 색인 과정
//    for (int i = 0; i < TEST_NUM; i++) {
//        int key = get_random_key();
//        int value = key + 10000;
//
//        element newNode;
//        newNode.key = key;
//        newNode.value = value;
//
//        linear_probing_insert(newNode);
//        success_test[i] = newNode;
//    }
//
//    // 검색 과정
//    for (int i = 0; i < TEST_NUM; i++) {
//        linear_probing_search(success_test[i]);
//        if (max_search_count < search_count) {
//            max_search_count = search_count;
//        }
//        search_count = 0; //초기화
//    }
//
//    printf("해시 테이블의 크기: %d\n", TABLE_SIZE);
//    printf("해시 테이블에 입력한 키의 개수: %d\n", TEST_NUM);
//    printf("successful search의 평균 횟수: %.2f\n", (float)total_search_count / TEST_NUM);
//    printf("최악의 경우 탐색 횟수: %d\n", max_search_count);
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_VERTEX 8
//
//typedef struct Graph{
//    int V;
//    int adj_matrix[MAX_VERTEX + 1][MAX_VERTEX + 1];
//} Graph;
//
//int visited[MAX_VERTEX + 1] = { 0 }; //방문처리 배열
//
//void initGraph(Graph* graph, int vertices);
//void addEdge(Graph* graph, int u, int v);
//void writeTreeToFile(Graph* graph, const char* filename);
//void bfs(Graph* graph, int start);
//void findSpanningTree(Graph* graph);
//void createGraphFromFile(const char* filename, Graph* graph);
//
//
//// 그래프 초기화
//void initGraph(Graph* graph, int vertices) {
//    graph->V = vertices;
//    for (int i = 1; i <= vertices; i++) {
//        for (int j = 1; j <= vertices; j++) {
//            graph->adj_matrix[i][j] = 0;
//        }
//    }
//}
//
//// 무방향 간선
//void addEdge(Graph* graph, int u, int v) {
//    graph->adj_matrix[u][v] = 1;
//    graph->adj_matrix[v][u] = 1;
//}
//
//// Spanning Tree를 파일에 기록
//void writeTreeToFile(Graph* graph, const char* filename) {
//    FILE* file = fopen(filename, "w");
//    if (file == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        return;
//    }
//
//    for (int i = 1; i <= graph->V; i++) {
//        for (int j = i + 1; j <= graph->V; j++) {
//            //두 정점간 간선이 있다면?
//            if (graph->adj_matrix[i][j] == 1) {
//                fprintf(file, "%d %d\n", i, j);
//            }
//        }
//    }
//
//    fclose(file);
//}
//
////BFS로 Spanning Tree 생성
//void bfs(Graph* graph, int start) {
//    int queue[MAX_VERTEX + 1]; //큐 활용
//    int front = 0;
//    int rear = 0;
//
//    queue[rear++] = start; //시작점 삽입
//    visited[start] = 1; //시작점 방문처리
//
//    while (front != rear) {
//        int vertex = queue[front++];
//        for (int neighbor = 1; neighbor <= graph->V; neighbor++) {
//            //큐에 삽입된 정점과 총 V의 정점간 간선이 있고, 방문을 하지않았다면?
//            if (graph->adj_matrix[vertex][neighbor] == 1 && visited[neighbor] == 0) {
//                queue[rear++] = neighbor; //그 정점 삽입
//                visited[neighbor] = 1; //삽입된 정점 방문처리
//                addEdge(graph, vertex, neighbor);  // 간선 추가
//                //삽입된 정점으로 위 과정 반복(BFS)
//            }
//        }
//    }
//}
//
//// Spanning Tree 생성
//void findSpanningTree(Graph* graph) {
//    bfs(graph, 1);  // 정점 1에서부터 너비우선 탐색 수행
//}
//
//// 주어진 파일로부터 그래프 생성
//void createGraphFromFile(const char* filename, Graph* graph) {
//    FILE* file = fopen(filename, "r");
//    if (file == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        return;
//    }
//
//    int u, v;
//    while (fscanf(file, "%d %d", &u, &v) == 2) {
//        addEdge(graph, u, v);
//    }
//
//    fclose(file);
//}
//
//int main() {
//    Graph graph;
//    initGraph(&graph, MAX_VERTEX);
//    //edges.txt
//    createGraphFromFile("/Users/idohyeong/Library/Mobile Documents/com~apple~TextEdit/Documents/edges.txt", &graph);
//    findSpanningTree(&graph);
//    //tree.txt
//    writeTreeToFile(&graph, "/Users/idohyeong/Library/Mobile Documents/com~apple~TextEdit/Documents/tree.txt");
//    return 0;
//}
//

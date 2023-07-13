//#include<bits/stdc++.h>
//using namespace std;
//
////부모노드 구하기
//int getParent(int parent[], int x){
//    if(parent[x] == x) return x; //x의 부모노드값 == 부모노드
//    return parent[x] = getParent(parent, parent[x]);
//}
//
////각 부모노드 합치기
//void unionParent(int parent[], int a, int b){
//    a = getParent(parent,a);
//    b = getParent(parent,b);
//    if(a<b) parent[b] = a;
//    else parent[a] = b;
//}
//
////(서로 다른 그래프에서)같은 부모노드인지 확인하기
//int findParent(int parent[], int a, int b){
//    a = getParent(parent, a);
//    b = getParent(parent, b);
//    if(a == b) return 1;
//    return 0;
//}
//
//
//
//////unionFind Test
////int main(){
////    int parent[11];
////    for(int i = 1;i<=10;i++)
////        parent[i] = i;
////    unionParent(parent, 1, 2);
////    unionParent(parent, 2, 3);
////    unionParent(parent, 3, 4);
////    unionParent(parent, 5, 6);
////    unionParent(parent, 6, 7);
////    unionParent(parent, 7, 8);
////
////    cout << "1과 5는 연결되어 있는가?\n" << findParent(parent, 1, 5);
////    unionParent(parent, 1, 5);
////    cout << "2과 8는 연결되어 있는가?\n" << findParent(parent, 1, 5);
////
////    return 0;
////}
//
//class Edge{
//public:
//    int node[2];
//    int distance;
//    Edge(int a, int b, int distance){
//        this->node[0] = a;
//        this->node[1] = b;
//        this->distance = distance;
//    }
//
//    bool operator<(const Edge &edge) const {
//            return this->distance < edge.distance;
//        }
//};
//
//
//int main(){
//    int n = 7;
//    int m = 11;
//    vector<Edge> v;
//
//    v.push_back(Edge(1, 7, 12));
//    v.push_back(Edge(1, 4, 28));
//    v.push_back(Edge(1, 2, 67));
//    v.push_back(Edge(1, 5, 17));
//    v.push_back(Edge(2, 4, 24));
//    v.push_back(Edge(2, 5, 62));
//    v.push_back(Edge(3, 5, 20));
//    v.push_back(Edge(3, 6, 37));
//    v.push_back(Edge(4, 7, 13));
//    v.push_back(Edge(5, 6, 45));
//    v.push_back(Edge(5, 7, 73));
//
//    //간선의 비용을 기준으로 오름차순 정렬한다
//    sort(v.begin(),v.end());
//
//    //각 정점이 포함된 그래프가 어디인지 저장한다
//    int set[n];
//    for(int i = 0;i<n;i++)
//        set[i] = i;
//    int sum = 0;
//    for(int i = 0;i<v.size();i++){
//        //간선에서 첫번째노드와 두번째노드가 연결이 되어있지 않은 경우 그래프에 포함함
//        if(!findParent(set, v[i].node[0] - 1, v[i].node[1] - 1)){
//            sum += v[i].distance;
//            unionParent(set, v[i].node[0] - 1, v[i].node[1] - 1);
//        }
//    }
//
//    cout << sum << "\n";
//
//    return 0;
//}
//
//

#include <bits/stdc++.h>
using namespace std;

void IntroPair()
{
    // syntax
    pair<int, int> p = {2, 3};
    // Accessing pairs
    cout << p.first << " " << p.second << endl;
    // Nested Pairs
    pair<int, pair<int, int>> s = {1, {2, 3}};
    // Accesing nested pairs
    cout << s.second.first << "\n";
    // array of pair's datatype
    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};
    // Accessing pair
    cout << arr[0].first << " " << arr[1].second;
}
void intro_vectors()    //uses singly linked list
{
    vector<int> v;
    // adding element at the back of vector
    v.push_back(1);
    v.emplace_back(2);

    // vector of pair datatype
    vector<pair<int, int>> vec;

    // difference in adding in push_back and emplace_back in vector
    vec.push_back({2, 3});
    vec.emplace_back(1, 3); // automatically detects the pair datatype doesn't require curly brackets

    vector<int> v0(4, 10); // define vector with 4 instance of 10 {10,10,10,10}
    vector<int> v1(4);    // define vector with 4 instance

    vector<int> v2(v); // copy of vector v1 in v2

   // cout << v[0] << " " << v.at(2); // Accessing vector

    // Iterators
    
    //Iterator points at the memory address of an vector 
    vector<int> ::iterator it =v.begin() ;         //define vector
    it++;                       // increment by 1 mem address 
    cout<<*(it) <<" "<<endl;         // use * to access element in iterators address 

    vector<int> ::iterator en =v.end();    //points to the next address of last element in vector {[1],[2]}[pt here] 
    /*
    vector<int> ::iterator it = v.rend();    //points to  address before first  element in vector [pt here]{[1],[2]}
    vector<int> ::iterator it = v.rbegin();    //points to the last element address in vector {[1],[2]} it moves in rev order when it++ 2->1
    */

   cout<<v.back()<<" ";   //points to the last element address in vector {[1],[here]}

   //print vector using iterator

   for(vector<int> :: iterator i =v0.begin();i !=v0.end();i++) // auto can autmatically assign datatype for data 
   {
    cout<<*(i)<<"h";
   }

   for(auto i =v0.begin();i !=v0.end();i++) // auto can autmatically assign datatype for data 
   {
    cout<<*(i)<<"a";
   }
    
    //normal printing The range-based for loop for(auto i : v0) iterates over each element in v0.
    for(auto i:v0)
    {
        cout<<i<<"n ";
    }

    //Deletion in vector
    v.erase(v.begin()+1); //v={1,2} 2 will be deleted
    //multiple deletion
    v0.erase(v0.begin(),v0.begin()+2); // v0={20,20,20,20} first 2 elements will be deleted (start,end)

    // Insert Elements
    vector<int> c(3,100);   //{100,100,100}
    c.insert(c.begin()+2,4);  //adds 4 at second position { 100,100,4,100}
    c.insert(c.begin(),2,3);  // add 2 instance of 3 at first position {3,3,100,100,4,100} v.insert(c.begin(),no of instances to be added,instance);

    c.insert(c.begin(),v0.begin(),v0.end());    //insert vector v0 in vec c {10,10,10,10,3,3,100,100,4,100}

    cout<<v.size(); //returns how many elements in the vector {1,2} ans->2

    v.pop_back(); //pop  last element {1,2} -> {1}

    v.swap(v0);  // v{1,2} v0{9,11} -->  v{9,11} v0{1,2} 

    v.clear(); // clear all elements in vector v { }

    v.empty(); // return true if vector is empty either false
 }
void testvector()
 {
   vector <int> v(3,5);
   
   v.push_back(4);
   v.emplace_back(9);
   
   for(vector<int> :: iterator it=v.begin();it!=v.end();it++)
   {
       cout<<*(it)<<" ";
   }

   v.erase(v.begin()+3);
   cout<<endl<<"del"<<endl;
   
   for(auto it=v.begin();it!=v.end();it++)
   {
       cout<<*(it)<<" ";
   }
   v.erase(v.begin(),v.begin()+3);
   cout<<endl<<"mul del"<<endl;
   
   for(auto it:v)
   {
       cout<<it<<" ";
   }
   cout<<"Insert element\n";
   v.insert(v.begin(),4);
   for(auto it:v)
   {
       cout<<it<<" ";
   }
   cout<<"\nInsert multiple element\n";
   v.insert(v.begin()+2,2,3);
   for (auto a=v.begin();a!=v.end();a++)
   {
       cout<<*(a)<<" ";
   }
   //insert another vector
   cout<<"\n";
   vector<int> b(3,9);
   
   v.insert(v.begin()+3,b.begin(),b.end());
   for(auto j:v)
   {
       cout<<j<<" ";
   }
   cout<<endl<<v.size()<<endl;
   v.pop_back();
   for(auto j:v)
   {
       cout<<j<<" ";
   }
   cout<<endl<<v.size()<<endl;
    cout<< "swap\n";
    vector <int> vo(2,3);
    vector <int> vn(2,4);
     for(auto j:vn)
   {
       cout<<j<<" ";
   }
    vn.swap(vo);
     for(auto j:vn)
   {
       cout<<j<<" ";
   }
   vn.clear();
      for(auto j:vn)
   {
       cout<<j<<" ";
   }
   cout<<"\n check empty";
   cout<<vn.empty();
}
void intro_list()       //uses double linked list
{
    //dynamic in nature and provide front operation

    list <int> ls;
    ls.push_back(3);
    ls.emplace_back(3);

    ls.push_front(1);
    ls.emplace_front(2);
}
void intro_deque()
{
    deque <int> dq;
    dq.push_back(7);
    dq.emplace_back(4);
    dq.push_front(1);
    dq.emplace_front(0);

    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();

    // rest fn are same as vector begin end rbegin,rend,clear, insert, size, swap
}
void Into_stack()  // LIFO principle no index
{
    stack <int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.emplace(4); //{4,3,2,1}

    st.top();  // return top element 4

    st.pop(); // deletes last entered element
    st.top();// 3

    st.size(); //return no of element
    st.empty(); //true if empty
    
    stack<int> s1,s2;

    s1.swap(s2);
}
void Intro_queue()
{
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(3); //{1,2,3}

    q.back()=+3; //adds 3 to last element

    q.front();  // points front element

    q.pop(); //deletes front element

    //size,swap,empty same as stack

}
void Intro_priorityqueue() // element of largest value stays at top/front (tree ds)
{
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(1); // {5,1}
    pq.emplace(10); // {10,5,1}

    cout<<pq.top(); // returns the top element(10)

    pq.pop(); // deletes top element {5,1}
    //size,swap,empty same as others

    //Minimum Heap
    priority_queue <int,vector<int>,greater<int>> mq;
    mq.push(5); //{5}
    mq.push(1); // {1,5}
    mq.emplace(10); // {1,5,10}

    mq.top(); // returns 1
}
int main()
{
    // IntroPair();
    intro_vectors();
    return 0;
}
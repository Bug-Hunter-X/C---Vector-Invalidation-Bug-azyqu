std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

//Instead of using raw pointers, we use iterators
std::vector<int>::iterator it = vec.begin() + 5;
*it = 100; 

//Alternative, avoid modifying the vector after obtaining a pointer
//int* ptr = &vec[0];
//for (int i = 0; i < 10; ++i){
//    vec[i] = 10; //Modify existing elements only
//}
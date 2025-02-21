int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; 
  } else {
    //Handle the case where ptr is null
    std::cerr << "Error: Null pointer encountered" << std::endl;
    return 1; // Indicate an error
  }
  return 0;
}
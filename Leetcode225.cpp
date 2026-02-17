
class MyStack {
 public:
  MyStack() = default;

  void push(int x) {
    queue_.push(x);
    for (int i = 0; i < queue_.size() - 1; ++i) {
      queue_.push(queue_.front());
      queue_.pop();
    }
  }

  int pop() {
    const int x = queue_.front();
    queue_.pop();
    return x;
  }

  int top() const { return queue_.front(); }

  bool empty() const { return queue_.empty(); }

 private:
  queue<int> queue_;
};

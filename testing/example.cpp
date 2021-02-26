#include <torch/torch.h>

int main() {
    torch::Tensor tensor = torch::randn({3, 3});
    std::cout << tensor << std::endl;
}

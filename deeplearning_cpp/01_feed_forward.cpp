#include <iostream>

#define MAX2(a, b) (a) > (b) ? (a) : (b)

class Neuron {
	public:
		Neuron(const double& w_input, const double& b_input)
			: w_(w_input), b_(b_input)
		{}
	public: // attributes
		double w_;
		double b_;
		double input_, output_; // for back-prop

	public: // behaviors
		double getAct(const double& x) {
			return MAX2(0.0, x);
		}

		double getActGrad(const double& x) {
			// ReLU
			double d = 0.0;
			if (x > 0.0) {
				d = 1.0;
			}

			return d;
		}

		double feedForward(const double& _input) {
			// output y = f(\sigma)
			// \sigma = w_ * input x + b
			input_ = _input;

			double sigma = w_ * input_ + b_;

			output_ = getAct(sigma);

			return output_;
		}

		void propBackward(const double& target) {
			const double grad = (output_ - target) * getActGrad(output_);
			const double alpha = 0.1; // learning rate

			w_ -= alpha * grad * input_; // d(wx+b)/dw = x
			b_ -= alpha * grad * 1.0; // d(wx_b)/db = 1
		}
};

int main() {
	Neuron my_neuron(2.0, 1.0);

	for (int i = 0; i < 60; i++) {
		std::cout << "Input=" << i << ", Output=" << my_neuron.feedForward(1.0) << std::endl;
		my_neuron.propBackward(4.0);
		std::cout << "w=" << my_neuron.w_ << ", b=" << my_neuron.b_ << std::endl;
	}
};

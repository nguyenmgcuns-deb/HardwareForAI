#include "mlp.h"

float W1[784][5] = {
    // [Copy all 784 rows of W1 from your neuron.h file here]
};

float b1[5] = {
    // [Copy b1 from your neuron.h file here]
};

float W2[5][8] = {
    // [Copy W2 from your neuron.h file here]
};

float b2[8] = {
    // [Copy b2 from your neuron.h file here]
};

float W3[8][8] = {
    // [Copy W3 from your neuron.h file here]
};

float b3[8] = {
    // [Copy b3 from your neuron.h file here]
};

float W4[8][10] = {
    // [Copy W4 from your neuron.h file here]
};

float b4[10] = {
    // [Copy b4 from your neuron.h file here]
};

int mlp( float input[784] ) {

	float out1[5];
	float out2[8];
	float out3[8];
	float out4[10];

	for (int i = 0; i < 5; i++) {
		float sum = b1[i];
		for (int j = 0; j < 784; j++) {
			sum += input[j] * W1[j][i];
		}
		out1[i] = (sum > 0.0f) ? sum : 0.0f;
	}

	for (int i = 0; i < 8; i++) {
		float sum = b2[i];
		for (int j = 0; j < 5; j++) {
			sum += out1[j] * W2[j][i];
		}
		out2[i] = (sum > 0.0f) ? sum : 0.0f;
	}

	for (int i = 0; i < 8; i++) {
		float sum = b3[i];
		for (int j = 0; j < 8; j++) {
			sum += out2[j] * W3[j][i];
		}
		out3[i] = (sum > 0.0f) ? sum : 0.0f;
	}

	int predicted_class = 0;
	float max_val = -1e9f;

	for (int i = 0; i < 10; i++) {
		float sum = b4[i];
		for (int j = 0; j < 8; j++) {
			sum += out3[j] * W4[j][i];
		}
		out4[i] = sum;

		if (sum > max_val) {
			max_val = sum;
			predicted_class = i;
		}
	}

	return predicted_class;
}

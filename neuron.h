#ifndef NEURON_H_
#define NEURON_H_

#include <ap_fixed.h>

// Định nghĩa độ rộng bit cho kiểu Fixed-point
#define W_IN   18   // Tổng số bit (Word width)
#define IW_IN  9    // Số bit phần nguyên (Integer word width)

// Định nghĩa kiểu dữ liệu Fixed-point dùng chung cho input, output và coefficients
typedef ap_fixed<W_IN, IW_IN> neuron_fxp_t;

// Khai báo hàm neuron sử dụng kiểu Fixed-point
neuron_fxp_t neuron(neuron_fxp_t w_fxp, neuron_fxp_t x_fxp, neuron_fxp_t b_fxp);

#endif // NEURON_H_
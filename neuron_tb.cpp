/*******************************************************************************
Vendor: Xilinx 
Associated Filename: neuron_test.c
Purpose: Vivado HLS tutorial example 
Device: All 
Revision History: March 1, 2013 - initial release
                                                
*******************************************************************************
Copyright 2008 - 2013 Xilinx, Inc. All rights reserved.

This file contains confidential and proprietary information of Xilinx, Inc. and 
is protected under U.S. and international copyright and other intellectual 
property laws.

DISCLAIMER
This disclaimer is not a license and does not grant any rights to the materials 
distributed herewith. Except as otherwise provided in a valid license issued to 
you by Xilinx, and to the maximum extent permitted by applicable law: 
(1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND WITH ALL FAULTS, AND XILINX 
HEREBY DISCLAIMS ALL WARRANTIES AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, 
INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-INFRINGEMENT, OR 
FITNESS FOR ANY PARTICULAR PURPOSE; and (2) Xilinx shall not be liable (whether 
in contract or tort, including negligence, or under any other theory of 
liability) for any loss or damage of any kind or nature related to, arising under 
or in connection with these materials, including for any direct, or any indirect, 
special, incidental, or consequential loss or damage (including loss of data, 
profits, goodwill, or any type of loss or damage suffered as a result of any 
action brought by a third party) even if such damage or loss was reasonably 
foreseeable or Xilinx had been advised of the possibility of the same.

CRITICAL APPLICATIONS
Xilinx products are not designed or intended to be fail-safe, or for use in any 
application requiring fail-safe performance, such as life-support or safety 
devices or systems, Class III medical devices, nuclear facilities, applications 
related to the deployment of airbags, or any other applications that could lead 
to death, personal injury, or severe property or environmental damage 
(individually and collectively, "Critical Applications"). Customer asresultes the 
sole risk and liability of any use of Xilinx products in Critical Applications, 
subject only to applicable laws and regulations governing limitations on product 
liability. 

THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS PART OF THIS FILE AT 
ALL TIMES.

*******************************************************************************/

#include <iostream>
using namespace std;

#include "neuron.h"

// replace __FILL_ME__ with your information
 
int main()
{

	int i;
	neuron_fxp_t w_fxp = 445.3212585449219 ;
	neuron_fxp_t b_fxp = 152.26878356933594 ;
	neuron_fxp_t y_fxp ;
	neuron_fxp_t x_fxp;

	neuron_fxp_t data_in_fxp[11] = {-0.1, -0.07, -0.04, -0.01, 0.02, 0.05, 0.08, 0.11, 0.14, 0.17, 0.2};

	cout << "Neuron Weight Fixed Point = " << w_fxp <<"\n";
	cout <<" Neuron Bias Fixed Point = " << b_fxp <<"\n";

	for (i = 0; i <11; i++){
		x_fxp = data_in_fxp[i];
		y_fxp  = neuron(w_fxp, x_fxp , b_fxp);
		cout << "i = " << i << " Neuron Output Fixed Point = " << y_fxp <<"\n";
		cout << "i = " << i << " Data Input Fixed Point = " << x_fxp <<"\n";
		}

	 return 0;
}

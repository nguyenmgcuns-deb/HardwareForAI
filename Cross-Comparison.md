• How does the MLP accuracy changes across FloatingPoint, Quantized, Pruned Designs? 

The FloatingPoint model had the highest accuracy at 90.05%. After quantization, the accuracy decreased only slightly to 89.79%. However, the Pruned model’s accuracy dropped significantly to 48.66%. Therefore, quantization kept almost the same performance, while pruning greatly reduced the model’s accuracy.

• How does the model’s size change?

The FloatingPoint model had a size of about 16.15 KB. Quantization reduced the size to about 4.04 KB, which is around 75% smaller. Pruning reduced the effective size further to about 3.37 KB, which is around 79% smaller than the original model. Overall, pruning created the smallest model, but quantization gave a better balance between model size and accuracy.
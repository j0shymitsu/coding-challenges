def count_positives_sum_negatives(arr):
    if arr == []:
        return arr
    else:
        count_pos = 0
        sum_neg = 0

        for item in arr:
            if item > 0:
                count_pos += 1
            if item < 0:
                sum_neg += item

        return [count_pos, sum_neg] 
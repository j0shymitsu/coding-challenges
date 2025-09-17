
def total_overs(balls):
    complete_overs = balls // 6
    remaining_balls = balls % 6
    return "{}.{}".format(complete_overs, remaining_balls)

print(total_overs(164))
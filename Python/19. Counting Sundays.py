# You are given the following information:
    
    # 1 Jan 1900 was a Monday
    # Thirty days has September,
    # April, June and November.
    # All the rest have thirty-one,
    # saving February alone,
    # which has twenty-eight, rain or shine,
    # and on leap years, twenty-nine.
    # A lear year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

# How many sundays fell on the first of the month during the twentieth century?

days = ["MO", "TU", "WE", "TH", "FR", "SA", "SU"]
months = {
    "Jan" : range(0, 32)
}
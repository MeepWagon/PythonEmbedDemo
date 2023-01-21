# Trying to read/write data using google sheets using gspread.
# Feel free to ignore this.

import gspread

service_account = gspread.service_account()
sheet = service_account.open("Job Options")

worksheet = sheet.worksheet("Sheet1")

def example():
    return str(worksheet.acell('A4').value)    
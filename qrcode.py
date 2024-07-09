import qrcode

a = int(
    input(
        'Enter the social media link you want to open\n 1 for Instagram\n 2 for Facebook\n 3 for Twitter\n 4 for Whatsapp\n 5 for Telegram\n'
    ))


def generate_qrcode(link):

  qr = qrcode.make(link)
  qr.save("qr_code.png")
  print('QR code saved')


if a == 1:
  username = input('Enter your username\n')
  link = (
      f"https://www.instagram.com/{username}?utm_source=ig_web_button_share_sheet&igsh=ZDNlZDc0MzIxNw=="
  )
  generate_qrcode(link)
elif a == 2:
  username = input('Enter your username\n')
  link = (f"https://www.facebook.com/{username}?mibextid=ZbWKwL")
  generate_qrcode(link)
elif a == 3:
  username = input('Enter your username\n')
  link = (f"https://twitter.com/{username}")
  generate_qrcode(link)
elif a == 4:
  number = int(input('Enter your phone number with country code\n'))
  link = (f"https://wa.me/{number}")
  generate_qrcode(link)
elif a == 5:
  username = input('Enter your username\n')
  link = (f"https://t.me/{username}")
  generate_qrcode(link)

else:
  print('Invalid input')

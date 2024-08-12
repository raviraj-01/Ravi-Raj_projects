import os
from PyPDF2 import PdfReader, PdfWriter

# Print the current working directory
print("Current Working Directory:", os.getcwd())

# Opening the PDF 
file_path = "sample.pdf"  
file_pdf = PdfReader(file_path)

# Object for PDF writer
new_pdf = PdfWriter()

# Loop to add and encrypt each page
for page in file_pdf.pages:
    # Add to the output PDF
    new_pdf.add_page(page)

# Encrypt the PDF with a password
password = "ravi.rajj#12"
new_pdf.encrypt(password)

# Write the encrypted PDF to a file
output_file_path = "encrypted_sample.pdf"
with open(output_file_path, "wb") as filename:
    new_pdf.write(filename)

print(f"Encrypted PDF saved as {output_file_path}")

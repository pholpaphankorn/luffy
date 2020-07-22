# โจทย์ Grader63
ลูฟี่อยากเป็นราชาวิศวกรคอมพิวเตอร์การที่จะเป็นราชาวิศวกรคอมพิวเตอร์ได้นั้นต้องเดินทางจากเกาะที่ 1-10 เรียงตามลำดับและเกาะที่ 10 จะมีกล่องสมบัติ One Piece อยู่แต่ลูฟี่ไม่รู้รหัสเปิดกล่องสมบัตินี้โดยแต่ละเกาะจะแทนด้วยเลขฐาน 2  1 จำนวน(1 bit) ให้มองว่าเกาะที่ 1 อยู่ทางซ้ายสุดและเรียงลำดับจากซ้ายไปขวาไปจนถึงเกาะที่ 10 เราก็จะได้เลขฐาน 2 มาชุดหนึ่ง(10 bits)โดยในการเดินทางเปลี่ยนเกาะแต่ละรอบของลูฟี่เช่นเกาะที่ 1 ไป เกาะที่ 2 ตัวเลขฐาน 2 ของแต่ละเกาะจะเปลี่ยนไปคือจะทำการเลื่อนตัวเลขทุกตัวไปทางซ้าย 1 ตัว(Left Shift ไป 1)โดยเลขที่อยู่ซ้ายสุดที่เกินออกมาจากเกาะที่ 1(ซ้ายสุด) จะโดนตัดออกแล้วนำเลขนั้นไปบวกให้เกาะที่ 10(ขวาสุด) หลังจากที่เลื่อนตำแหน่งแล้วก็บวก 1 เข้าไปที่เกาะสุดท้ายอีกครั้งหนึ่งและถ้าเกิดมีการทดเกิดขึ้นเกินเกาะที่ 1(ซ้ายสุด) จะนำเลขทดนั้นไปบวกให้กับเกาะสุดท้าย(ขวาสุด)เสมอ เป็นอย่างนี้ในแต่ละรอบของการเปลี่ยนเกาะ เมื่อลูฟี่เดินทางถึงเกาะสุดท้ายและลูฟี่ต้องการจะเปิดกล่องสมบัติซึ่งรหัสเปิดกล่องสมบัติก็คือนำตัวเลขฐาน 2 ของเกาะที่ 1-10 มาเรียงจากซ้ายไปขวาและแปลงเป็นเลขฐาน 10 อยากให้พวกนายลูกเรือวิศวกรคอมพิวเตอร์ทั้งหลายเขียนโปรแกรมเพื่อหารหัสเปิดกล่องสมบัติ One Piece ให้ลูฟี่ชายที่จะเป็นราชาวิศวกรคอมพิวเตอร์โดยมี input เป็นเลขฐาน 2 อะไรก็ได้ 10 bits และ output คือรหัสเปิดกล่องสมบัติOne Pieceที่เปลี่ยนไปตั้งแต่เดินทางทางจากเกาะที่ 1-10(จะมี 10 เลข)และบรรทัดสุดท้ายคือรหัสเปิดกล่องสมบัติ One Piece ที่แท้จริง

เว็บใส่โจทย์:https://docs.google.com/spreadsheets/d/1Q_FVj4yQeyAAmHEd-F8eNWJFD7MB1u86FT3RRd3Eekc/edit#gid=1585858483

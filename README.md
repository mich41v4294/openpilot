[![](https://i.imgur.com/UelUjKAh.png)](#)

Table of Contents
=======================
* Welcome to my PQ Branch!
* I know that here soon this will be outdated due to the work of jyoung
* In the mean time, this remains as the leading PQ branch to my knowledge
* Currently you get the most up to date timebomb bypass stuff, now featuring an alarm when you don't grab the wheel

What Branch Should You Use? WBSYU!
=======================
* It's quite simple once you understand my babbling.
* pq-legacy is for the plebs who don't have a comma pedal and a compatible ABS unit
* pq-private is for the adventurous PQ bois who have a pedal and a compatible ABS unit!
* This next part should be pretty self explanatory. If you just made your J533 harness from a photo you got from discord, use the extcan branch. If you know you're on drivetrain/powertrain, which you will know, then use the drivetrain branch

Installing a branch
=======================
* First figure out what branch you want to use.
* Then run this command when SSH'ed into your (Fr)Eon
* `cd /data/ && git clone https://github.com/actuallylemoncurd/openpilot/ -b "BRANCH NAME HERE" --recurse-submodules && chmod -R 777 /data/openpilot && reboot`
* You can also try using my install URL's!
* Clean install with retropilot
`cd /data/ && rm -rf openpilot && git clone https://github.com/mich41v4294/openpilot/ -b "dp-0812" --recurse-submodules && chmod -R 777 /data/openpilot && find /data/openpilot -type f -exec sed -i 's/api.commadotai.com/api.retropilot.org/g' {} + && rm /data/params/d/DongleId && reboot`

https://www.khonsu.cc/PQ-Legacy-ExtCan

https://www.khonsu.cc/PQ-Legacy-Drivetrain

https://www.khonsu.cc/PQ-Private-ExtCan

https://www.khonsu.cc/PQ-Private-Drivetrain


Reach out to me on discord: khonsu#2473 if you have any questions

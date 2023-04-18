import discord

intents = discord.Intents.default()
intents.members = True

TOKEN = "MTA5Mjc0MTgwMDM3NDA0Njc1MA.GvBErl.ikDvCuonrpXwynFGnAlMk24xRfsUY_9gMdy5KY"

class MyClient(discord.Client):
    def __init__(self):
        super().__init__(intents=intents)

    async def on_ready(self):
        print('Logged in as')
        print(self.user.name)
        print(self.user.id)
        print('------')

    async def on_message(self, message):
        # we do not want the bot to reply to itself
        if message.author.id == self.user.id:
            return

        if message.content.startswith('!hello'):
            print('Received !hello command')
            await message.channel.send('Hello {0.author.mention}'.format(message))
            print('Sent hello message')

client = MyClient()
print('Connecting bot...')
client.run(TOKEN)
print('Bot connected successfully!')

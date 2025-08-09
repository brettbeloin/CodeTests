import { PrismaClient } from './generated/prisma'
import { withAccelerate } from '@prisma/extension-accelerate'

// 2
const prisma = new PrismaClient()
    .$extends(withAccelerate())

// 3
async function main() {
    /*
    await prisma.user.create({
        data: {
            name: 'brett',
            email: "brett@brett",
            password: "brett123",
            profile: {
                create: {
                    campain: {
                        create: {
                            id: 1,
                            name: "trial",
                        },
                    },
                    characters: {
                        create: {
                            name: "bob",
                        },
                    },
                },
            },
        },
    })

    await prisma.user.createMany({
        data: [{
            name: "jon",
            email: "jon@jon",
            password: "jon123",
        },
        {
            name: "summer",
            email: "summer@summer",
            password: "summer123",
        },
        {
            name: "micheal",
            email: "michel@micheal",
            password: "micheal123",
        }, {
            name: "nathen",
            email: "nathen@nathen",
            password: "nathen123",
        },],
        skipDuplicates: true,
    })
    */

    const allUsers = await prisma.user.findMany({
        include: {
            profile: true,
        }
    })

    const allCharacters = await prisma.character.findMany({
        include: {
            campian: true,
            Profile: true,
        },
    })

    const allCampiagns = await prisma.campian.findMany({
        include: {
            characters: true,
            Profile: true,
        },
    })

    console.dir(allUsers, { depth: null })
    console.dir(allCharacters, { depth: null })
    console.dir(allCampiagns, { depth: null })
}

// 4
main()
    .then(async () => {
        await prisma.$disconnect()
    })
    .catch(async (e) => {
        console.error(e)
        // 5
        await prisma.$disconnect()
        process.exit(1)
    })

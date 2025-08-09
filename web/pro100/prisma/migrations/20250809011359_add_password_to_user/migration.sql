/*
  Warnings:

  - Added the required column `password` to the `User` table without a default value. This is not possible if the table is not empty.

*/
-- AlterTable
ALTER TABLE "public"."User" ADD COLUMN     "password" TEXT NOT NULL;

-- CreateTable
CREATE TABLE "public"."campian" (
    "id" INTEGER NOT NULL,
    "name" TEXT NOT NULL,
    "profileId" INTEGER,

    CONSTRAINT "campian_pkey" PRIMARY KEY ("id")
);

-- CreateTable
CREATE TABLE "public"."character" (
    "id" SERIAL NOT NULL,
    "name" TEXT NOT NULL,
    "campianId" INTEGER,
    "profileId" INTEGER,

    CONSTRAINT "character_pkey" PRIMARY KEY ("id")
);

-- AddForeignKey
ALTER TABLE "public"."campian" ADD CONSTRAINT "campian_profileId_fkey" FOREIGN KEY ("profileId") REFERENCES "public"."Profile"("id") ON DELETE SET NULL ON UPDATE CASCADE;

-- AddForeignKey
ALTER TABLE "public"."character" ADD CONSTRAINT "character_campianId_fkey" FOREIGN KEY ("campianId") REFERENCES "public"."campian"("id") ON DELETE SET NULL ON UPDATE CASCADE;

-- AddForeignKey
ALTER TABLE "public"."character" ADD CONSTRAINT "character_profileId_fkey" FOREIGN KEY ("profileId") REFERENCES "public"."Profile"("id") ON DELETE SET NULL ON UPDATE CASCADE;

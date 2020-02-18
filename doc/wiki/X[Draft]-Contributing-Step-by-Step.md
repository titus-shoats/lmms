If you'd like to help develop LMMS, you've come to the right place. This guide gives an overview of the steps involved in contributing to LMMS's development, and links to useful resources for each step of the way.

### The process

#### 0. Ask for help when you need to
Before you start, you should know that you can ask for help if you get stuck somewhere along the way. If you pop into the #devtalk channel on the [LMMS Discord](discord.gg/PruNxpG) someone can hopefully help you out.

#### 1. Decide what you'd like to work on
Whether it's a feature or a bug fix, you'll need to know exactly how you want to improve LMMS.
  * There's lots of [existing issues](https://github.com/lmms/lmms/issues) to choose from, and some of them are [good for beginners](https://github.com/lmms/lmms/issues?q=is%3Aissue+is%3Aopen+label%3A%22good+first+issue%22).
   * If you know what area of LMMS you want to work on, you can check if there's a relevant [meta issue](https://github.com/lmms/lmms/issues?q=is%3Aissue+is%3Aopen+label%3Ameta) and pick something from there.
  * If you've have something specific in mind and there's no existing issue for it, you can follow [this guide](https://github.com/LMMS/lmms/wiki/Reporting-Issues) and open an issue yourself.

#### 2. Build your own copy of LMMS
In order to try out the changes you make, you'll want a local copy of LMMS's source code that you build yourself. The [compiling](https://github.com/LMMS/lmms/wiki/Compiling) wiki page covers the whole process.

#### 3. Familiarize yourself with the relevant code
Now it's time to find the part of LMMS's code relevant to your improvement.
  * As for the code itself:
    * Our internal effects and instrument plugins are found in [lmms/plugins](https://github.com/LMMS/lmms/tree/master/plugins).
    * GUI stuff is in [src/gui](https://github.com/LMMS/lmms/tree/master/src/gui).
      * Piano roll and the other editors are in, you guessed it, [src/gui/editors](https://github.com/LMMS/lmms/tree/master/src/gui/editors).
    * You can try looking at [merged pull requests](https://github.com/LMMS/lmms/pulls?utf8=%E2%9C%93&q=is%3Apr+is%3Amerged) to see what files are changed for what kind of feature.
      * For example, [adding ghost notes](https://github.com/LMMS/lmms/pull/4575) involved a lot of [changes in PianoRoll.cpp and Pattern.cpp](https://github.com/LMMS/lmms/pull/4575/files).
  * In addition, we have some wiki pages about how parts of the code work:
    * [LMMS Architecture](https://github.com/LMMS/lmms/wiki/LMMS-Architecture) for a general overview.
    * [Plugin development](https://github.com/LMMS/lmms/wiki/Plugin-development) for development of instruments or effects.
    * [Automation Internals](https://github.com/LMMS/lmms/wiki/Automation-Internals) for automation improvements.

#### 4. Implement your improvement
Finally, get to work!
  * Your changes should follow the coding conventions [defined here](https://github.com/LMMS/lmms/wiki/Coding-conventions).
    * This includes writing good in-code documentation (comments). If there's something in the code you had a hard time understanding, leave a comment explaining it to make things easier for the next person. Of course, this also applies to the code you add yourself!
  * If appropriate, you should add tests according to the wiki page on [unit testing](https://github.com/LMMS/lmms/wiki/Unit-testing). You should also confirm that your changes don't fail any of the existing tests.

#### 5. Create a pull request and await review
Once your changes work on your local copy, it's time to share them.
  * Create a pull request. The process is explained [here](https://github.com/LMMS/lmms/wiki/Submitting-a-patch).
  * Your changes will be reviewed according to [this guide](https://github.com/LMMS/lmms/wiki/Reviewing-Pull-Requests). If you'd like this step to be faster, you can help out by reviewing other's pull requests!

#### 6. Celebrate!
Actually, you might get a few comments about things you have to change first. Even so, you've come a long way, so give yourself a pat on the back! Once any issues with your pull request are worked out, it can be merged and LMMS will be better for it :)

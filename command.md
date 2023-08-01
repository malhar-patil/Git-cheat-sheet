**Note:** Click on 🔗 to see an example.

- `git config --global user.name "<Enter name here>"` to set username. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20114127.png)</sup>
- `git config --global user.email <email>` to set an email. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20114206.png)</sup>
- `git config -h` to see the help documentation for 'git config' command. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20114230.png)</sup>
- `git help <command>` to get the help documentation for a specific git command. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20114318.png)</sup>
- `cd <file/folder path>` to change directory. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20114506.png)</sup>
- `git init` to initialize a git repository in the current working directory. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20114532.png)</sup>
- `git status` to check the current state of the repository. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20114807.png)</sup>
- `git add <filename>` to track a file in the working directory <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20114954.png)</sup>
- `git rm --cached <filename>` to untrack a file in the working directory  <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20115228.png)</sup>
  
**Tip:** To ignore a file/folder create a txt file and rename it as .gitignore , then add the files that are to be ignored such as .txt files etc. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20115707.png)</sup>
- `git add .` to track all the files present in the directory <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20115849.png)</sup>
- `git commit -m` to Commit all the staged changes (To commit means to take a snapshot of the repository at particular point of a time). <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20120101.png)</sup>
- `git commit -m "<Your Message>"` to add a message for a commit directly in the command line <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20121230.png)</sup>
- `git restore --staged <filename>` to remove the changes that were previously staged <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20121416.png)</sup>
- `git commit -a -m "<message>"` to stage all modified and delete files automatically and create a new commit with the specified commit message in a single step. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20122949.png)</sup>
- `git rm "<filename>"` to delete a file. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20123049.png)</sup>
- `git restore  "<filename>"` to restore a file. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20123649.png)</sup>
- `git mv "<oldname>" "<newname">` to rename a file. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20124042.png)</sup>
- `git log /git log --oneline` to view the commit history of the repository, i.e see all the commit in chronological order. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20124411.png)</sup>  <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20124434.png)</sup>
- `git commit -m "<newMessage>" --amend` to change the message of recent commit (Using amend command changes the commit ID and hence should not be used in public repositories). <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20130542.png)</sup>
- `git log -p (-2)` to see the commit history along with the actual content changes (patch) introduced in each commit. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20130632.png)</sup>
- `git show <commit_ID>` to view detailed information about the specified commit, including the commit message and changes introduced. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20130757.png)</sup>
- `git rm <filename>` to remove a file from both, working directory and git repository.
- `git checkout <filename>` to Undo unstaged changes. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20131418.png)</sup>
- `git checkout <filename> -p` to interactively preview and selectively discard changes within the specified file before restoring it to the state of the last commit.
- `git reset HEAD <filename>` to remove files from staging. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20131607.png)</sup>
- `git revert HEAD` to revert/ rollback to a previous commit. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20134506.png)</sup>
- `git branch` to see, create and manages all the branches in a repository. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20150521.png)</sup>
- `git branch <new-branch-name>` to create a new branch. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20150553.png)</sup>
- `git checkout <branch-name>` to switch to a new created branch. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20150703.png)</sup>
- `git checkout -b <branch-name>` to create and switch to a new branch. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20150703.png)</sup>
- `git branch -s <branch-name>` to delete a branch. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20152021.png)</sup>
- `git merge <branch-name>` to merge a branch. <sup>[🔗](https://github.com/malhar-patil/Git-cheat-sheet/blob/main/Images/Screenshot%202023-07-31%20152554.png)</sup>
- `git merge --abort` to abort in case of merge conflicts. 
- `git log --graph --oneline` to get detailed view about how a merge happened.





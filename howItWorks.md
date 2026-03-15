# Todo List

## Objectif du projet

Avoir une todo list dans le terminal, dans lequel on peut taper une tâche et l'enregistrer dans un fichier exportable en pdf (si possible en c++).

## User story

**En tant qu'utilisateur, je veux pouvoir:**
<br>
- Créer un dossier de tâches dans lequel les options suivantes seront possible.
    - Ajouter une tâche
    - Supprimer une tâche
    - Modifier une tâche
- Supprimer un dossier de tâches.
- Modifier le nom d'un dossier de tâches.
- Choisir d'ouvrir un dossier de tâche.
- Exporter au format PDF un dossier de tâches avec le titre au dessus.

## Fonctionnement de l'application

### Interface visuelle dès le lancement

- Laisser l'utilisateur choisir l'action qu'il veut en tapant le numéro associé à l'action

<br>

```bash
> Type (1, 2, 3, 4, 5): [cin here]

1- Create task folder
2- Delete task folder
3- Edit task folder name
4- Export task folder as PDF
5- Exit app

```

#### Option 1 choisi (Create task folder)

On affiche ceci

```bash

> Type->CreateTaskFolder: [cin here] (1)

1- Add task
2- Delete task
3- Edit task
4- Back

```

- **Si on choisi l'option 1**

```bash
> Type->CreateTaskFolder->AddTask

Task (stop to finish): [cin here]
Task (stop to finish): [cin here]
Task ('stop' to finish): stop

> Type->CreateTaskFolder: [cin here]
```

- **Si on choisi l'option 2**

```bash
> Type->CreateTaskFolder->DeleteTask

1: First task
2: Second task

> Delete task number (0 to cancel): [cin here] (1)

2: Second task

> Delete task number (0 to cancel): [cin here] (0)
> Type->CreateTaskFolder: [cin here]

```

- **Si on choisi l'option 3**

```bash
> Type->CreateTaskFolder->EditTask

1: First task
2: Second task

> Edit task number (0 to cancel): [cin here] (1)
> Task choosen : First task

New task : [cin here] (New task)

1: New task
2: Second task

> Edit task number (0 to cancel): [cin here] (0)
> Type->CreateTaskFolder: [cin here]

```

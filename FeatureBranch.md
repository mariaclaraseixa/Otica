Aqui está um resumo passo a passo de como criar e usar uma **feature branch** no Git, que é uma prática comum para desenvolver novas funcionalidades isoladamente antes de integrá-las na branch principal.

### Passo a Passo: Criar e Usar uma Feature Branch

#### 1. **Certifique-se de estar na branch principal (normalmente `main`)**
Primeiro, você precisa garantir que está na branch principal (`main` ou outra que você usa como base). Isso garante que a nova branch será criada a partir do código mais atualizado.

```bash
git checkout main
```

#### 2. **Atualize a branch principal (`main`)**
Puxe as últimas mudanças da branch `main` do repositório remoto para garantir que você tem o código mais recente:

```bash
git pull origin main
```

#### 3. **Crie a nova branch para a feature**
Agora crie e mude para a nova branch que será usada para desenvolver a feature. Suponha que a nova feature seja chamada `estoque`:

```bash
git checkout -b estoque
```

- O `-b` cria a nova branch e troca para ela automaticamente.

#### 4. **Desenvolva a feature na nova branch**
Agora, com a branch `estoque` ativa, você pode fazer suas modificações no código.

- Adicione os arquivos modificados:

  ```bash
  git add .
  ```

- Faça commits das mudanças:

  ```bash
  git commit -m "Implementando a funcionalidade de estoque"
  ```

#### 5. **Subir a branch para o repositório remoto (opcional)**
Se você quiser compartilhar o progresso da feature com outros desenvolvedores ou apenas garantir que ela esteja armazenada remotamente, você pode fazer o push da branch para o repositório remoto:

```bash
git push -u origin estoque
```

Isso cria a branch `estoque` no GitHub ou outro repositório remoto.

#### 6. **Manter a branch sincronizada com `main`**
Se mudanças importantes acontecerem na branch `main` enquanto você trabalha na `estoque`, é uma boa prática incorporar essas mudanças à sua branch. Para fazer isso:

1. Volte para a branch `main` e atualize-a:
   ```bash
   git checkout main
   git pull origin main
   ```

2. Volte para a branch `estoque`:
   ```bash
   git checkout estoque
   ```

3. Mescle as mudanças de `main` na sua branch `estoque`:
   ```bash
   git merge main
   ```

4. Resolva possíveis conflitos, adicione os arquivos corrigidos e finalize o merge com:
   ```bash
   git add <arquivos>
   git commit
   ```

#### 7. **Finalizar a feature (merge para `main`)**
Depois que a feature estiver pronta e testada, você vai querer integrar (fazer o merge) as mudanças na branch `main`:

1. Volte para a branch `main`:
   ```bash
   git checkout main
   ```

2. Mescle a branch `estoque` na `main`:
   ```bash
   git merge estoque
   ```

3. Após o merge, você pode subir as mudanças para o repositório remoto:
   ```bash
   git push origin main
   ```

#### 8. **Apagar a feature branch (opcional)**
Depois que a feature branch for mesclada, você pode optar por apagá-la, caso não precise mais dela:

- Localmente:
  ```bash
  git branch -d estoque
  ```

- No repositório remoto:
  ```bash
  git push origin --delete estoque
  ```

---

### Resumo dos Comandos:

1. **Ir para a branch `main`:**
   ```bash
   git checkout main
   ```

2. **Atualizar a branch `main`:**
   ```bash
   git pull origin main
   ```

3. **Criar uma nova branch `estoque`:**
   ```bash
   git checkout -b estoque
   ```

4. **Desenvolver na branch `estoque` (adicionar e commitar as mudanças):**
   ```bash
   git add .
   git commit -m "Descrição da mudança"
   ```

5. **Subir a branch `estoque` para o repositório remoto (opcional):**
   ```bash
   git push -u origin estoque
   ```

6. **Mesclar a branch `main` para manter a feature branch atualizada:**
   ```bash
   git checkout main
   git pull origin main
   git checkout estoque
   git merge main
   ```

7. **Mesclar a branch `estoque` de volta na `main` quando estiver pronta:**
   ```bash
   git checkout main
   git merge estoque
   git push origin main
   ```

8. **Apagar a branch `estoque` (opcional):**
    - Local: `git branch -d estoque`
    - Remoto: `git push origin --delete estoque`

Agora você pode trabalhar de forma organizada e segura em uma nova feature!